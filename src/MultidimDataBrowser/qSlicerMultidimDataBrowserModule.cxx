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

// MultidimDataBrowser Logic includes
#include <vtkSlicerMultidimDataBrowserLogic.h>

// MultidimDataBrowser includes
#include "qSlicerMultidimDataBrowserModule.h"
#include "qSlicerMultidimDataBrowserModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerMultidimDataBrowserModule, qSlicerMultidimDataBrowserModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerMultidimDataBrowserModulePrivate
{
public:
  qSlicerMultidimDataBrowserModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerMultidimDataBrowserModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerMultidimDataBrowserModulePrivate
::qSlicerMultidimDataBrowserModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerMultidimDataBrowserModule methods

//-----------------------------------------------------------------------------
qSlicerMultidimDataBrowserModule
::qSlicerMultidimDataBrowserModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerMultidimDataBrowserModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerMultidimDataBrowserModule::~qSlicerMultidimDataBrowserModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerMultidimDataBrowserModule::helpText()const
{
  return "This is a loadable module for handling multi-dimensional data";
}

//-----------------------------------------------------------------------------
QString qSlicerMultidimDataBrowserModule::acknowledgementText()const
{
  return "This work was funded by CCO ACRU and OCARIO";
}

//-----------------------------------------------------------------------------
QStringList qSlicerMultidimDataBrowserModule::contributors()const
{
  QStringList moduleContributors;
  moduleContributors << QString("Matthew Holden (Queen's), Kevin Wang (PMH)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerMultidimDataBrowserModule::icon()const
{
  return QIcon(":/Icons/MultidimDataBrowser.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerMultidimDataBrowserModule::categories() const
{
  return QStringList() << "Multi-dimension";
}

//-----------------------------------------------------------------------------
QStringList qSlicerMultidimDataBrowserModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerMultidimDataBrowserModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation * qSlicerMultidimDataBrowserModule
::createWidgetRepresentation()
{
  return new qSlicerMultidimDataBrowserModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerMultidimDataBrowserModule::createLogic()
{
  return vtkSlicerMultidimDataBrowserLogic::New();
}