class VAR1{
    public void FUN1() throws Throwable
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
                VAR12<String, String> VAR13 = new VAR12<String, String>();
                VAR13.FUN2(VAR14.VAR15,"");
                VAR13.FUN2(VAR14.VAR16, "VAR17:
                DirContext VAR18 = null;
                try
                {
                    VAR18 = new FUN3(VAR13);
                    
                    String VAR19 = "" + VAR2 + "";
                    VAR20<VAR21> VAR22 = VAR18.FUN4("", VAR19, null);
                    while (VAR22.FUN5())
                    {
                        SearchResult VAR23 = VAR22.next();
                        Attributes VAR24 = VAR23.FUN6();
                        VAR20<?> VAR25 = VAR24.FUN7();
                        while (VAR25.FUN5())
                        {
                            Attribute VAR26 = (VAR27) VAR25.next();
                            VAR20<?> VAR28 = VAR26.FUN7();
                            while(VAR28.FUN5())
                            {
                                VAR7.writeLine("" + VAR28.next().FUN8());
                            }
                        }
                    }
                }
                catch (NamingException VAR29)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR29);
                }
                finally
                {
                    if (VAR18 != null)
                    {
                        try
                        {
                            VAR18.close();
                        }
                        catch (NamingException VAR29)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR29);
                        }
                    }
                }
            }
        }
};