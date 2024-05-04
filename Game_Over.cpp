class CONRAN()
{
    // code cua lop CONRAN nhu truoc day
    bool RanChamDuoi()
    {
    for( int i=1; i < DoDai ; i++)
    {
        if(( A[0].x== A[i].x)&& (A[0].y == A[i].y))
            return true;
    }
    return false;

    }
    bool ChamTuong()
    {   if(A[0].x==5 ||A[0].x== 70 ||A[0].y==10 ||A[0].y==25)
        {return true;}

     return false;
    }


};
bool Game_Over(CONRAN r)
{
    for(int i=1;i<DoDai;i++)
    {
        if(r.A[0].x ==r.A[i].y) return true;
    }
    if(r.ChamTuong()|| r.RanChamDuoi()== true) return true;
    return false;
}
