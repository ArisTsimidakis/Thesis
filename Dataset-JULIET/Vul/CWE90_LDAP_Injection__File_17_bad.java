class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
            {
                File VAR3 = new File("");
                FileInputStream VAR4 = null;
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
    
                try
                {
                    
                    VAR4 = new FileInputStream(VAR3);
                    VAR5 = new InputStreamReader(VAR4, "");
                    VAR6 = new BufferedReader(VAR5);
    
                    
                    
                    VAR2 = VAR6.readLine();
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
    
            for (int VAR12 = 0; VAR12 < 1; VAR12++)
            {
                VAR13<String, String> VAR14 = new VAR13<String, String>();
                VAR14.FUN2(VAR15.VAR16,"");
                VAR14.FUN2(VAR15.VAR17, "VAR18:
                DirContext VAR19 = null;
                try
                {
                    VAR19 = new FUN3(VAR14);
                    
                    String VAR20 = "" + VAR2 + "";
                    VAR21<VAR22> VAR23 = VAR19.FUN4("", VAR20, null);
                    while (VAR23.FUN5())
                    {
                        SearchResult VAR24 = VAR23.next();
                        Attributes VAR25 = VAR24.FUN6();
                        VAR21<?> VAR26 = VAR25.FUN7();
                        while (VAR26.FUN5())
                        {
                            Attribute VAR27 = (VAR28) VAR26.next();
                            VAR21<?> VAR29 = VAR27.FUN7();
                            while(VAR29.FUN5())
                            {
                                VAR8.writeLine("" + VAR29.next().FUN8());
                            }
                        }
                    }
                }
                catch (NamingException VAR30)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR30);
                }
                finally
                {
                    if (VAR19 != null)
                    {
                        try
                        {
                            VAR19.close();
                        }
                        catch (NamingException VAR30)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR30);
                        }
                    }
                }
            }
        }
};