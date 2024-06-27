class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Properties VAR4 = new Properties();
                    FileInputStream VAR5 = null;
    
                    try
                    {
                        VAR5 = new FileInputStream("");
                        VAR4.FUN2(VAR5);
    
                        
                        VAR3 = VAR4.FUN3("");
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                    finally
                    {
                        
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
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                VAR11<String, String> VAR12 = new VAR11<String, String>();
                VAR12.FUN4(VAR13.VAR14,"");
                VAR12.FUN4(VAR13.VAR15, "VAR16:
                DirContext VAR17 = null;
    
                try
                {
                    VAR17 = new FUN5(VAR12);
                    
                    String VAR18 = "" + VAR3 + "";
    
                    VAR19<VAR20> VAR21 = VAR17.FUN6("", VAR18, null);
                    while (VAR21.FUN7())
                    {
                        SearchResult VAR22 = VAR21.next();
                        Attributes VAR23 = VAR22.FUN8();
                        VAR19<?> VAR24 = VAR23.FUN9();
                        while (VAR24.FUN7())
                        {
                            Attribute VAR25 = (VAR26) VAR24.next();
                            VAR19<?> VAR27 = VAR25.FUN9();
                            while(VAR27.FUN7())
                            {
                                VAR7.writeLine("" + VAR27.next().FUN10());
                            }
                        }
                    }
                }
                catch (NamingException VAR28)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR28);
                }
                finally
                {
                    if (VAR17 != null)
                    {
                        try
                        {
                            VAR17.close();
                        }
                        catch (NamingException VAR28)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR28);
                        }
                    }
                }
    
            }
        }
};