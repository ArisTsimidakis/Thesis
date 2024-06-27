class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                Socket VAR3 = null;
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
                try
                {
                    
                    VAR3 = new Socket("", 39544);
    
                    
    
                    
                    VAR5 = new InputStreamReader(VAR3.getInputStream(), "");
                    VAR4 = new BufferedReader(VAR5);
    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
    
            for (int VAR11 = 0; VAR11 < 1; VAR11++)
            {
                if (VAR2 != null)
                {
                    KerberosPrincipal VAR12 = new FUN2("");
                    
                    {
                        Cipher VAR13 = VAR14.FUN3("");
                        
                        SecretKeySpec VAR15 = new FUN4("".getBytes(""), "");
                        VAR13.FUN5(VAR14.VAR16, VAR15);
                        VAR2 = new String(VAR13.FUN6(VAR2.getBytes("")), "");
                    }
                    KerberosKey VAR17 = new FUN7(VAR12, VAR2.FUN8(), null);
                    VAR7.writeLine(VAR17.FUN9());
                }
            }
        }
};