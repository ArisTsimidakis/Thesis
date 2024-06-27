class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                try
                {
                    VAR3.parseInt(""); 
                }
                catch (Exception VAR4) 
                {
                    VAR2.writeLine("");
                    throw VAR4; 
                }
            }
        }
};