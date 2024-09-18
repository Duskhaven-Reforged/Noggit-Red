// This file is part of Noggit3, licensed under GNU General Public License (version 3).

#ifndef NOGGIT_MATRIXTRANSFORMNODE_HPP
#define NOGGIT_MATRIXTRANSFORMNODE_HPP

#include "noggit/ui/tools/NodeEditor/Nodes/BaseNode.hpp"
#include <QComboBox>

using QtNodes::PortType;
using QtNodes::PortIndex;
using QtNodes::NodeData;
using QtNodes::NodeDataType;
using QtNodes::NodeDataModel;
using QtNodes::NodeValidationState;


namespace Noggit
{
    namespace Ui::Tools::NodeEditor::Nodes
    {
        class MatrixTransformNode : public BaseNode
        {
        Q_OBJECT

        public:
            MatrixTransformNode();
            NodeValidationState validate() override;
            void compute() override;
            QJsonObject save() const override;
            void restore(QJsonObject const& json_obj) override;

        private:
          QComboBox* _operation;
        };

    }

}

#endif //NOGGIT_MATRIXTRANSFORMNODE_HPP
