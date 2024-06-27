class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                Properties VAR3 = new Properties();
                Session VAR4 = VAR5.FUN3(VAR3, null);
                String VAR6 = "";
                try
                {
                    Message VAR7 = new FUN4(VAR4); 
                    VAR7.FUN5(new FUN6(""));
                    VAR7.FUN7(VAR8.VAR9.VAR10, new FUN6(""));
                    VAR7.FUN8("");
                    VAR7.FUN9(VAR6);
                    
                    VAR11.FUN10(VAR7);
                }
                catch (AddressException VAR12)
                {
                    
                    VAR2.VAR13.log(VAR14.VAR15, "", VAR12);
                }
                catch (MessagingException VAR16)
                {
                    
                    VAR2.VAR13.log(VAR14.VAR15, "", VAR16);
                }
            }
        }
};