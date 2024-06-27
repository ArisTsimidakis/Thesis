class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
    
            VAR2 = -1.0f; 
    
            
            
            {
                String VAR3 = System.FUN2("");
                if (VAR3 != null)
                {
                    try
                    {
                        VAR2 = VAR4.FUN3(VAR3.trim());
                    }
                    catch(NumberFormatException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
            }
    
            
            ByteArrayOutputStream VAR10 = null;
            ObjectOutput VAR11 = null;
    
            try
            {
                VAR10 = new FUN4() ;
                VAR11 = new FUN5(VAR10) ;
                VAR11.FUN6(VAR2);
                byte[] VAR12 = VAR10.FUN7();
                (new FUN8()).FUN9(VAR12  );
            }
            catch (IOException VAR13)
            {
                VAR6.VAR7.log(VAR8.VAR9, "", VAR13);
            }
            finally
            {
                
                try
                {
                    if (VAR11 != null)
                    {
                        VAR11.close();
                    }
                }
                catch (IOException VAR13)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR13);
                }
    
                try
                {
                    if (VAR10 != null)
                    {
                        VAR10.close();
                    }
                }
                catch (IOException VAR13)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR13);
                }
            }
        }
};