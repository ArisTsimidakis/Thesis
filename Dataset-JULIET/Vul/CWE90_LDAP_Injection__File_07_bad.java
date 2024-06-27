class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3 == 5)
            {
                VAR2 = ""; 
                {
                    File VAR4 = new File("");
                    FileInputStream VAR5 = null;
                    InputStreamReader VAR6 = null;
                    BufferedReader VAR7 = null;
                    try
                    {
                        
                        VAR5 = new FileInputStream(VAR4);
                        VAR6 = new InputStreamReader(VAR5, "");
                        VAR7 = new BufferedReader(VAR6);
                        
                        
                        VAR2 = VAR7.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
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
                            VAR9.writeLine("" + VAR29.next().FUN8());
                        }
                    }
                }
            }
            catch (NamingException VAR30)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR30);
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
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR30);
                    }
                }
            }
    
        }
};