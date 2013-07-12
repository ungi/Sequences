/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QtPlugin>

// MultiDimension Logic includes
#include <vtkSlicerMultiDimensionLogic.h>

// MultiDimension includes
#include "qSlicerMultiDimensionModule.h"
#include "qSlicerMultiDimensionModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerMultiDimensionModule, qSlicerMultiDimensionModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerMultiDimensionModulePrivate
{
public:
  qSlicerMultiDimensionModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerMultiDimensionModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerMultiDimensionModulePrivate
::qSlicerMultiDimensionModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerMultiDimensionModule methods

//-----------------------------------------------------------------------------
qSlicerMultiDimensionModule
::qSlicerMultiDimensionModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerMultiDimensionModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerMultiDimensionModule::~qSlicerMultiDimensionModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerMultiDimensionModule::helpText()const
{
  return "This is a loadable module for handling multi-dimensional data";
}

//-----------------------------------------------------------------------------
QString qSlicerMultiDimensionModule::acknowledgementText()const
{
  return "This work was funded by CCO ACRU and OCARIO";
}

//-----------------------------------------------------------------------------
QStringList qSlicerMultiDimensionModule::contributors()const
{
  QStringList moduleContributors;
  moduleContributors << QString("Matthew Holden (Queen's), Kevin Wang (PMH)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerMultiDimensionModule::icon()const
{
  return QIcon(":/Icons/MultiDimension.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerMultiDimensionModule::categories() const
{
  return QStringList() << "MultiDimension";
}

//-----------------------------------------------------------------------------
QStringList qSlicerMultiDimensionModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerMultiDimensionModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation * qSlicerMultiDimensionModule
::createWidgetRepresentation()
{
  return new qSlicerMultiDimensionModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerMultiDimensionModule::createLogic()
{
  return vtkSlicerMultiDimensionLogic::New();
}
