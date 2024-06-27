class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            
            
            {
                String VAR5 = System.FUN2("");
                if (VAR5 != null) 
                {
                    try
                    {
                        VAR2 = VAR3.FUN3(VAR5.trim());
                    }
                    catch(NumberFormatException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
    
            
            ByteArrayOutputStream VAR11 = null;
            ObjectOutput VAR12 = null;
    
            try
            {
                VAR11 = new FUN4() ;
                VAR12 = new FUN5(VAR11) ;
                VAR12.FUN6(VAR2);
                byte[] VAR13 = VAR11.FUN7();
                (new FUN8()).FUN9(VAR13  );
            }
            catch (IOException VAR14)
            {
                VAR7.VAR8.log(VAR9.VAR10, "", VAR14);
            }
            finally
            {
                
                try
                {
                    if (VAR12 != null)
                    {
                        VAR12.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR14);
                }
    
                try
                {
                    if (VAR11 != null)
                    {
                        VAR11.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR14);
                }
            }
        }
};