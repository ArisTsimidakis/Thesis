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
    
                String VAR6 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR6 = "";
                }
                else
                {
                    
                    VAR6 = "";
                }
    
                if (VAR5 != null)
                {
                    
                    String [] VAR7 = VAR5.split("");
                    if (VAR7.length < 2)
                    {
                        return;
                    }
                    String VAR8 = VAR7[0];
                    String VAR9 = VAR7[1];
                    
                    XPath VAR10 = VAR11.FUN4().FUN5();
                    InputSource VAR12 = new FUN6(VAR6);
                    
                    
                    String VAR13 = "
                                   "" + VAR9 + "" +
                                   "";
                    String VAR14 = (String)VAR10.FUN7(VAR13, VAR12, VAR15.VAR16);
                }
    
            }
            catch (IOException VAR17)
            {
                VAR18.VAR19.log(VAR20.VAR21, "", VAR17);
            }
            catch (ClassNotFoundException VAR22)
            {
                VAR18.VAR19.log(VAR20.VAR21, "", VAR22);
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
                catch (IOException VAR17)
                {
                    VAR18.VAR19.log(VAR20.VAR21, "", VAR17);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR17)
                {
                    VAR18.VAR19.log(VAR20.VAR21, "", VAR17);
                }
            }
        }
};