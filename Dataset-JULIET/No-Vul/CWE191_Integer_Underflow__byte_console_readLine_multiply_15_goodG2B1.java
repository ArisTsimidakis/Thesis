class VAR1{
    private void FUN1() throws Throwable
        {
            byte VAR2;
    
            switch (5)
            {
            case 6:
                
                VAR2 = 0;
                break;
            default:
                
                VAR2 = 2;
                break;
            }
    
            switch (7)
            {
            case 7:
                if(VAR2 < 0) 
                {
                    
                    byte VAR3 = (byte)(VAR2 * 2);
                    VAR4.writeLine("" + VAR3);
                }
                break;
            default:
                
                VAR4.writeLine("");
                break;
            }
        }
};