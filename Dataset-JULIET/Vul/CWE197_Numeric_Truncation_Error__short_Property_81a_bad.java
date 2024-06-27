class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            
            
            {
                String VAR5 = System.FUN2("");
                try
                {
                    VAR2 = VAR3.FUN3(VAR5.trim());
                }
                catch(NumberFormatException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
            }
    
            CWE197_Numeric_Truncation_Error__short_Property_81_base VAR11 = new FUN4();
            VAR11.FUN5(VAR2 );
        }
};