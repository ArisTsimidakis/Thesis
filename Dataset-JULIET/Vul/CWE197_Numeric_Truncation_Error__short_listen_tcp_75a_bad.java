class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            {
                ServerSocket VAR5 = null;
                Socket VAR6 = null;
                BufferedReader VAR7 = null;
                InputStreamReader VAR8 = null;
    
                
                try
                {
                    VAR5 = new FUN2(39543);
                    VAR6 = VAR5.accept();
    
                    
    
                    VAR8 = new InputStreamReader(VAR6.getInputStream(), "");
                    VAR7 = new BufferedReader(VAR8);
    
                    
                    String VAR9 = VAR7.readLine();
                    if (VAR9 != null) 
                    {
                        try
                        {
                            VAR2 = VAR3.FUN3(VAR9.trim());
                        }
                        catch(NumberFormatException VAR10)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                        }
                    }
                }
                catch (IOException VAR15)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
    
                    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                }
            }
    
            
            ByteArrayOutputStream VAR16 = null;
            ObjectOutput VAR17 = null;
    
            try
            {
                VAR16 = new FUN4() ;
                VAR17 = new FUN5(VAR16) ;
                VAR17.FUN6(VAR2);
                byte[] VAR18 = VAR16.FUN7();
                (new FUN8()).FUN9(VAR18  );
            }
            catch (IOException VAR15)
            {
                VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
            }
            finally
            {
                
                try
                {
                    if (VAR17 != null)
                    {
                        VAR17.close();
                    }
                }
                catch (IOException VAR15)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                }
    
                try
                {
                    if (VAR16 != null)
                    {
                        VAR16.close();
                    }
                }
                catch (IOException VAR15)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                }
            }
        }
};