class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                {
                    String VAR3 = null;
                    VAR3 = "";
                    VAR2.writeLine(VAR3.length());
                    
                    VAR3 = "";
                    VAR2.writeLine(VAR3.length());
                }
            }
        }
};