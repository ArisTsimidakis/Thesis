class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    try
                    {
                        
                        VAR4 = new Socket("", 39544);
                        
                        VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        catch (IOException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
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
                            if (VAR4 != null)
                            {
                                VAR4.close();
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
            VAR12.FUN3(VAR13.VAR14,"");
            VAR12.FUN3(VAR13.VAR15, "VAR16:
            DirContext VAR17 = null;
    
            try
            {
                VAR17 = new FUN4(VAR12);
                
                String VAR18 = "" + VAR2 + "";
    
                VAR19<VAR20> VAR21 = VAR17.FUN5("", VAR18, null);
                while (VAR21.FUN6())
                {
                    SearchResult VAR22 = VAR21.next();
                    Attributes VAR23 = VAR22.FUN7();
                    VAR19<?> VAR24 = VAR23.FUN8();
                    while (VAR24.FUN6())
                    {
                        Attribute VAR25 = (VAR26) VAR24.next();
                        VAR19<?> VAR27 = VAR25.FUN8();
                        while(VAR27.FUN6())
                        {
                            VAR3.writeLine("" + VAR27.next().FUN9());
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