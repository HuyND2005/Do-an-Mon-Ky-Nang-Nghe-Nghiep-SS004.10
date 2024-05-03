
bool AnQua(QUA qua,CONRAN r)
{
    if(r.A[0]==qua.A)
    {
        return true;
    }
    return false;
}
bool operator==(Point A,Point B)
{
    if(A.x==B.x&&A.y==B.y)
        return true;
    else return false;
}