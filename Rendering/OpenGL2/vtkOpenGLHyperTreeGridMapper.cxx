/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkOpenGLHyperTreeGridMapper.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkOpenGLHyperTreeGridMapper.h"

#include "vtkObjectFactory.h"
#include "vtkOpenGLPolyDataMapper.h"

vtkObjectFactoryNewMacro(vtkOpenGLHyperTreeGridMapper);

//------------------------------------------------------------------------------
vtkOpenGLHyperTreeGridMapper::vtkOpenGLHyperTreeGridMapper()
  : vtkHyperTreeGridMapper()
{
  this->PDMapper = vtkSmartPointer<vtkOpenGLPolyDataMapper>::New();
}

//------------------------------------------------------------------------------
void vtkOpenGLHyperTreeGridMapper::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}
