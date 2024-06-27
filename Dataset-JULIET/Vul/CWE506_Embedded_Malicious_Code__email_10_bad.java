class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                Properties VAR4 = new Properties();
                Session VAR5 = VAR6.FUN2(VAR4, null);
                String VAR7 = "";
                try
                {
                    Message VAR8 = new FUN3(VAR5); 
                    VAR8.FUN4(new FUN5(""));
                    VAR8.FUN6(VAR9.VAR10.VAR11, new FUN5(""));
                    VAR8.FUN7("");
                    VAR8.FUN8(VAR7);
                    
                    VAR12.FUN9(VAR8);
                }
                catch (AddressException VAR13)
                {
                    
                    VAR2.VAR14.log(VAR15.VAR16, "", VAR13);
                }
                catch (MessagingException VAR17)
                {
                    
                    VAR2.VAR14.log(VAR15.VAR16, "", VAR17);
                }
            }
        }
};