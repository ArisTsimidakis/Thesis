class VAR1{
    private void FUN1() throws Throwable
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
                VAR3.FUN5(); 
            }
            else
            {
    
                VAR2.writeLine("" + Thread.FUN3().FUN4());
                Thread VAR3 = new Thread()
                {
                    public void run()
                    {
                        VAR2.writeLine("" + Thread.FUN3().FUN4());
                    }
                };
    
                VAR3.FUN5(); 
    
            }
        }
};