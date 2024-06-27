class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            
            
            {
                String VAR5 = System.FUN2("");
                if (VAR5 != null) 
                {
                    try
                    {
                        VAR2 = VAR3.parseInt(VAR5.trim());
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
                VAR11 = new FUN3() ;
                VAR12 = new FUN4(VAR11) ;
                VAR12.FUN5(VAR2);
                byte[] VAR13 = VAR11.FUN6();
                (new FUN7()).FUN8(VAR13  );
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