class VAR1{
    public void FUN1() throws Throwable
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
                if(VAR2 < 0) 
                {
                    
                    int VAR3 = (int)(VAR2 * 2);
                    VAR4.writeLine("" + VAR3);
                }
            }
        }
};