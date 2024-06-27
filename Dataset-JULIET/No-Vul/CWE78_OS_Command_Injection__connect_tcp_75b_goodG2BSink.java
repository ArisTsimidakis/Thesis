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
    
                String VAR6;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR6 = "";
                }
                else
                {
                    
                    VAR6 = "";
                }
    
                
                Process VAR7 = VAR8.getRuntime().exec(VAR6 + VAR5);
                VAR7.waitFor();
    
            }
            catch (IOException VAR9)
            {
                VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
            }
            catch (ClassNotFoundException VAR14)
            {
                VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
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
                catch (IOException VAR9)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR9)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                }
            }
        }
};