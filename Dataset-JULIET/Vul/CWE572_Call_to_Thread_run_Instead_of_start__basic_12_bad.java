class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                VAR2.writeLine("" + Thread.FUN3().FUN4());
                Thread VAR3 = new Thread()
                {
                    public void run()
                    {
                        VAR2.writeLine("" + Thread.FUN3().FUN4());
                    }
                };
                VAR3.run(); 
            }
            else
            {
    
                VAR2.writeLine("" + Thread.FUN3().FUN4());
                Thread VAR4 = new Thread()
                {
                    public void run()
                    {
                        VAR2.writeLine("" + Thread.FUN3().FUN4());
                    }
                };
    
                VAR4.FUN5(); 
    
            }
        }
};