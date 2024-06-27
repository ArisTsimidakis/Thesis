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
    
                int VAR6;
                try
                {
                    VAR6 = VAR7.parseInt(VAR5);
                }
                catch (NumberFormatException VAR8)
                {
                    VAR9.writeLine("");
                    VAR6 = 1;
                }
    
                
                if (VAR6 >= 0 && VAR6 <= 5)
                {
                    for (int VAR10=0; VAR10 < VAR6; VAR10++)
                    {
                        VAR9.writeLine("");
                    }
                }
    
            }
            catch (IOException VAR11)
            {
                VAR9.VAR12.log(VAR13.VAR14, "", VAR11);
            }
            catch (ClassNotFoundException VAR15)
            {
                VAR9.VAR12.log(VAR13.VAR14, "", VAR15);
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
                catch (IOException VAR11)
                {
                    VAR9.VAR12.log(VAR13.VAR14, "", VAR11);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR9.VAR12.log(VAR13.VAR14, "", VAR11);
                }
            }
        }
};