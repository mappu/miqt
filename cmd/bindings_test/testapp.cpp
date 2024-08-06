#include "../binding.h"

int main(int argc, char** argv) {
     
    PQApplication app = QApplication_new(&argc, argv);    
    
    PQWidget w = QWidget_new();
    QWidget_show(w);
    
    return QApplication_exec(app);
}