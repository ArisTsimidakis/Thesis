class VAR1{
    public void FUN1(LinkedList<VAR2> VAR3 ) throws Throwable
        {
            int VAR4 = VAR3.remove(2);
    
            
            if (VAR4 > 0 && VAR4 <= 20)
            {
                File VAR5 = new File("");
                FileOutputStream VAR6 = new FileOutputStream(VAR5);
                OutputStreamWriter VAR7 = new FUN2(VAR6, "");
                BufferedWriter VAR8 = new BufferedWriter(VAR7);
                int VAR9;
                for (VAR9 = 0; VAR9 < VAR4; VAR9++)
                {
                    try
                    {
                        VAR8.write("");
                    }
                    catch (IOException VAR10)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                    }
                }
                
                try
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                }
                try
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                }
                try
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                }
            }
    
        }
};