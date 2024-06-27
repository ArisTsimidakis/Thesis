class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            Properties VAR3 = new Properties();
            FileInputStream VAR4 = null;
            try
            {
                VAR4 = new FileInputStream("");
                VAR3.FUN2(VAR4);
    
                VAR2 = VAR3.FUN3("");
            }
            catch (IOException VAR5)
            {
                VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
            catch (IOException VAR5)
            {
                VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
    
                try
                {
                    if (VAR10 != null)
                    {
                        VAR10.close();
                    }
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
            }
        }
};