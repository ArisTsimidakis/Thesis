class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                int VAR4, VAR5;
                VAR4 = (new FUN2()).nextInt(3);
                VAR5 = 0;
                
                if (VAR4 == 0)
                {
                    VAR2.writeLine("");
                    VAR5 = 1; 
                }
                VAR2.writeLine(VAR5);
            }
        }
};