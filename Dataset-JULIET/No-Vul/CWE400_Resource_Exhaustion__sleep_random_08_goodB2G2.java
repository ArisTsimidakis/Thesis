class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (FUN2())
            {
                
                VAR2 = (new FUN3()).nextInt();
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN2())
            {
                
                if (VAR2 > 0 && VAR2 <= 2000)
                {
                    Thread.sleep(VAR2);
                }
            }
        }
};