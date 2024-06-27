class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try
            {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                String VAR5 = (String)VAR4.readObject();
    
                VAR6<String, String> VAR7 = new VAR6<String, String>();
                VAR7.FUN3(VAR8.VAR9,"");
                VAR7.FUN3(VAR8.VAR10, "VAR11:
                DirContext VAR12 = null;
    
                try
                {
                    VAR12 = new FUN4(VAR7);
                    
                    String VAR13 = "" + VAR5 + "";
    
                    VAR14<VAR15> VAR16 = VAR12.FUN5("", VAR13, null);
                    while (VAR16.FUN6())
                    {
                        SearchResult VAR17 = VAR16.next();
                        Attributes VAR18 = VAR17.FUN7();
                        VAR14<?> VAR19 = VAR18.FUN8();
                        while (VAR19.FUN6())
                        {
                            Attribute VAR20 = (VAR21) VAR19.next();
                            VAR14<?> VAR22 = VAR20.FUN8();
                            while(VAR22.FUN6())
                            {
                                VAR23.writeLine("" + VAR22.next().FUN9());
                            }
                        }
                    }
                }
                catch (NamingException VAR24)
                {
                    VAR23.VAR25.log(VAR26.VAR27, "", VAR24);
                }
                finally
                {
                    if (VAR12 != null)
                    {
                        try
                        {
                            VAR12.close();
                        }
                        catch (NamingException VAR24)
                        {
                            VAR23.VAR25.log(VAR26.VAR27, "", VAR24);
                        }
                    }
                }
    
            }
            catch (IOException VAR28)
            {
                VAR23.VAR25.log(VAR26.VAR27, "", VAR28);
            }
            catch (ClassNotFoundException VAR29)
            {
                VAR23.VAR25.log(VAR26.VAR27, "", VAR29);
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
                catch (IOException VAR28)
                {
                    VAR23.VAR25.log(VAR26.VAR27, "", VAR28);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR28)
                {
                    VAR23.VAR25.log(VAR26.VAR27, "", VAR28);
                }
            }
        }
};