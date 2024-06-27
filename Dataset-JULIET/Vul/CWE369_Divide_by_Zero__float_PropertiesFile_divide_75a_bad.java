class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
    
            VAR2 = -1.0f; 
    
            
            Properties VAR3 = new Properties();
            FileInputStream VAR4 = null;
            try
            {
                VAR4 = new FileInputStream("");
                VAR3.FUN2(VAR4);
    
                
                String VAR5 = VAR3.FUN3("");
                if (VAR5 != null)
                {
                    try
                    {
                        VAR2 = VAR6.FUN4(VAR5.trim());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
            catch (IOException VAR12)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
            }
            finally
            {
                
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
            }
    
            
            ByteArrayOutputStream VAR13 = null;
            ObjectOutput VAR14 = null;
    
            try
            {
                VAR13 = new FUN5() ;
                VAR14 = new FUN6(VAR13) ;
                VAR14.FUN7(VAR2);
                byte[] VAR15 = VAR13.FUN8();
                (new FUN9()).FUN10(VAR15  );
            }
            catch (IOException VAR12)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
            }
            finally
            {
                
                try
                {
                    if (VAR14 != null)
                    {
                        VAR14.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
    
                try
                {
                    if (VAR13 != null)
                    {
                        VAR13.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
            }
        }
};