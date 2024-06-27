class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2 = (new FUN2()).FUN3();
    
            VAR3<String, String> VAR4 = new VAR3<String, String>();
            VAR4.FUN4(VAR5.VAR6,"");
            VAR4.FUN4(VAR5.VAR7, "VAR8:
            DirContext VAR9 = null;
    
            try
            {
                VAR9 = new FUN5(VAR4);
                
                String VAR10 = "" + VAR2 + "";
    
                VAR11<VAR12> VAR13 = VAR9.FUN6("", VAR10, null);
                while (VAR13.FUN7())
                {
                    SearchResult VAR14 = VAR13.next();
                    Attributes VAR15 = VAR14.FUN8();
                    VAR11<?> VAR16 = VAR15.FUN9();
                    while (VAR16.FUN7())
                    {
                        Attribute VAR17 = (VAR18) VAR16.next();
                        VAR11<?> VAR19 = VAR17.FUN9();
                        while(VAR19.FUN7())
                        {
                            VAR20.writeLine("" + VAR19.next().FUN10());
                        }
                    }
                }
            }
            catch (NamingException VAR21)
            {
                VAR20.VAR22.log(VAR23.VAR24, "", VAR21);
            }
            finally
            {
                if (VAR9 != null)
                {
                    try
                    {
                        VAR9.close();
                    }
                    catch (NamingException VAR21)
                    {
                        VAR20.VAR22.log(VAR23.VAR24, "", VAR21);
                    }
                }
            }
    
        }
};