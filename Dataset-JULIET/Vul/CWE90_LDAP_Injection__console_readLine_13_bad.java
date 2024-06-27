class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4 == 5)
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR5 = null;
                    BufferedReader VAR6 = null;
                    
                    try
                    {
                        VAR5 = new InputStreamReader(System.in, "");
                        VAR6 = new BufferedReader(VAR5);
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            VAR11<String, String> VAR12 = new VAR11<String, String>();
            VAR12.FUN2(VAR13.VAR14,"");
            VAR12.FUN2(VAR13.VAR15, "VAR16:
            DirContext VAR17 = null;
    
            try
            {
                VAR17 = new FUN3(VAR12);
                
                String VAR18 = "" + VAR2 + "";
    
                VAR19<VAR20> VAR21 = VAR17.FUN4("", VAR18, null);
                while (VAR21.FUN5())
                {
                    SearchResult VAR22 = VAR21.next();
                    Attributes VAR23 = VAR22.FUN6();
                    VAR19<?> VAR24 = VAR23.FUN7();
                    while (VAR24.FUN5())
                    {
                        Attribute VAR25 = (VAR26) VAR24.next();
                        VAR19<?> VAR27 = VAR25.FUN7();
                        while(VAR27.FUN5())
                        {
                            VAR3.writeLine("" + VAR27.next().FUN8());
                        }
                    }
                }
            }
            catch (NamingException VAR28)
            {
                VAR3.VAR8.log(VAR9.VAR10, "", VAR28);
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
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR28);
                    }
                }
            }
    
        }
};