#pragma once


class ofFileDialogResult{
	public:
		ofFileDialogResult();
		
		//TODO: only 1 file for now
		string getName();
		string getPath();
		
		string filePath;
		string fileName;
		bool bSuccess;
};

void ofSystemAlertDialog(string errorMessage);
//ofFileDialogResult ofSystemLoadDialog(string windowTitle="", bool bFolderSelection = false);
//ofFileDialogResult ofSystemSaveDialog(string defaultName, string messageName);
