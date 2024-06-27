class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            FileInputStream VAR3 = null;
            String VAR4 = "";
            try
            {
                VAR3 = new FileInputStream(VAR4);
                Properties VAR5 = new Properties();
                VAR5.FUN2(VAR3);
    
                
                VAR2 = VAR5.FUN3("");
            }
            catch (IOException VAR6)
            {
                VAR7.writeLine("" + VAR4);
                VAR2 = ""; 
            }
            finally
            {
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                }
            }
    
            
            ByteArrayOutputStream VAR12 = null;
            ObjectOutput VAR13 = null;
    
            try
            {
                VAR12 = new FUN4() ;
                VAR13 = new FUN5(VAR12) ;
                VAR13.FUN6(VAR2);
                byte[] VAR14 = VAR12.FUN7();
                (new FUN8()).FUN9(VAR14  );
            }
            catch (IOException VAR6)
            {
                VAR7.VAR9.log(VAR10.VAR11, "", VAR6);
            }
            finally
            {
                
                try
                {
                    if (VAR13 != null)
                    {
                        VAR13.close();
                    }
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR6);
                }
    
                try
                {
                    if (VAR12 != null)
                    {
                        VAR12.close();
                    }
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR6);
                }
            }
        }
};