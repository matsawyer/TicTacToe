#include "EditPlayer.h"


using namespace System::Windows::Forms;

using namespace My122PA8;

//Adapted from: http://msdn.microsoft.com/en-us/library/1b4az623.aspx
//Thanks to MSDN Team

string EditPlayer::sStringToStdString ( String ^ s) {
   string os;
   using namespace Runtime::InteropServices;
   const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
   return os;
}

void EditPlayer::showMessage(string title, string msg){
	String^ _msg = gcnew String(msg.c_str());
	String^ _title = gcnew String(title.c_str());
	MessageBox::Show(_msg, _title, MessageBoxButtons::OK);
}

