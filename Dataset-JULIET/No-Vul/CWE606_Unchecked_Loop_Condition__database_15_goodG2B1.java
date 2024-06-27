class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (5)
            {
            case 6:
                
                VAR2 = null;
                break;
            default:
                
                VAR2 = "";
                break;
            }
    
            switch (7)
            {
            case 7:
                int VAR3;
                try
                {
                    VAR3 = VAR4.parseInt(VAR2);
                }
                catch (NumberFormatException VAR5)
                {
                    VAR6.writeLine("");
                    VAR3 = 1;
                }
                for (int VAR7=0; VAR7 < VAR3; VAR7++)
                {
                    
                    VAR6.writeLine("");
                }
                break;
            default:
                
                VAR6.writeLine("");
                break;
            }
        }
};