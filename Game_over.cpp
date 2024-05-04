bool Game_Over1(CONRAN r)
{
    for(int i=1;i<r.DoDai;i++)
    {
        if(r.A[0]==r.A[i]) return true;
    }
    if(r.A[0].x==tuongtrai||r.A[0].x==tuongphai||r.A[0].y==tuongtren||r.A[0].y==tuongduoi) return true;
    return false;
}