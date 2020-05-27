#ifndef INTERNET_PLEX_PLEXSERVICE_H_
#define INTERNET_PLEX_PLEXSERVICE_H_

#include "internet/core/internetmodel.h"
#include "internet/core/internetservice.h"

class Plexervice: public InternetService {
    Q_OBJECT
    Q_ENUMS(LoginState)

  public:
    PlexService(Application *app, InternetModel* parent);
    ~Plexervice();

  enum LoginState {
      LoginState_Loggedin,
      LoginState_BadServer,
      LoginState_OutdatedClient,
      LoginState_OutdatedServer,
      LoginState_BadCredentials,
      LoginState_Unlicensed,
      LoginState_OtherError,
      LoginState_Unknown,
      LoginState_ConnectionRefused,
      LoginState_HostNotFound,
      LoginState_Timeout,
      LoginState_SslError,
      LoginState_IncompleteCredentials,
      LoginState_RedirectLimitExceeded,
      LoginState_RedirectNoUrl,
  };
};

#endif
