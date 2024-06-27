class VAR1{
    private void FUN1() throws Throwable
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
    
            
            {
                Cipher VAR10 = VAR11.FUN4("");
    
                
                SecretKeySpec VAR12 = new FUN5("".getBytes(""), "");
                VAR10.FUN6(VAR11.VAR13, VAR12);
    
                String VAR14 = new String(VAR10.FUN7(VAR2.getBytes("")), "");
                VAR2 = VAR14;
            }
    
            for (int VAR15 = 0; VAR15 < 1; VAR15++)
            {
                
                Connection VAR16 = null;
                try
                {
                    VAR16 = VAR17.getConnection("", "", VAR2);
                }
                catch (SQLException VAR18)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR18);
                }
                finally
                {
                    try
                    {
                        if (VAR16 != null)
                        {
                            VAR16.close();
                        }
                    }
                    catch (SQLException VAR18)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR18);
                    }
                }
            }
        }
};