/****************************************************************************
* MeshLab                                                           o o     *
* An extendible mesh processor                                    o     o   *
*                                                                _   O  _   *
* Copyright(C) 2005, 2006                                          \/)\/    *
* Visual Computing Lab                                            /\/|      *
* ISTI - Italian National Research Council                           |      *
*                                                                    \      *
* All rights reserved.                                                      *
*                                                                           *
* This program is free software; you can redistribute it and/or modify      *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 2 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
*                                                                           *
****************************************************************************/
/****************************************************************************
  History

 $Log$
 Revision 1.4  2005/12/09 16:37:20  fmazzant
 maskobj for select element to save

 Revision 1.3  2005/12/07 07:52:25  fmazzant
 export obj generic(base)

 Revision 1.2  2005/12/06 15:54:59  fmazzant
 update dialog export obj

 Revision 1.1  2005/12/02 17:40:26  fmazzant
 added dialog obj exporter.


*****************************************************************************/
#include "ui_savemask.h"
#include "maskobj.h"

class SaveMaskDialog : public QDialog
{
	Q_OBJECT
public:
	SaveMaskDialog(QWidget *parent);
	SaveMaskDialog(MaskObj *mask, QWidget *parent);
	bool ReadMask();

private slots:
	void SlotOkButton();
	void SlotCancelButton();

private:
	Ui::SaveMaskObjDialog ui;
	MaskObj *mask;
	
};