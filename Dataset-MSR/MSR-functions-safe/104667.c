VAR1<VAR2> FUN1(const VAR3::VAR4& VAR5) {
    VAR3::string VAR6;
    VAR1<VAR2> VAR7 = FUN2(VAR5, &VAR6);
    FUN3(VAR7) << VAR5;
    FUN4("", VAR6) << VAR5;
    return VAR7;
  }