#ifndef INTERNET_PLEX_PLEXSETTINGSPAGE_H_
#define INTERNET_PLEX_PLEXSETTINGSPAGE_H_

#include "ui/settingspage.h"
#include "plexservice.h"

class Ui_PlexSettingsPage;

class PlexSettingsPage : public SettingsPage {
  Q_OBJECT

 public:
  explicit PlexSettingsPage(SettingsDialog* dialog);
  ~PlexSettingsPage();

  void Load();
  void Save();

 public slots:
  void LoginStateChanged(PLEXService::LoginState newstate);

 private slots:
  void ServerEditingFinished();
  void Login();
  void Logout();

 private:
  Ui_PlexSettingsPage* ui_;
  PlexService* service_;
};

#endif  // INTERNET_PLEX_PLEXSETTINGSPAGE_H_
