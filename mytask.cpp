#include "mytask.h"

MyTask::MyTask()
{
    qRegisterMetaType<qintptr>("qintptr");
}

void MyTask::run()
{
    //Time Consumer
    qDebug() << "Task Start";

    int iNumber = 0;
    for (int i = 0; i < 600; i++)
    {
        iNumber += i;
    }

     qDebug() << "Task Done";
    emit Result(iNumber);
}
