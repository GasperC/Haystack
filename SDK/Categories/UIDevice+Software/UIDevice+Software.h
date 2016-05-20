//
//  UIDevice+Software.h
//

@import Foundation;
@import UIKit;

typedef enum : NSUInteger
{
    UIDeviceJailbreakStatusNotJailbroken,               // All tests passed
    UIDeviceJailbreakStatusPathExists,                                          // Various paths exist
    UIDeviceJailbreakStatusPathExistsApplicationsCydiaApp,                      // Various paths exist
    UIDeviceJailbreakStatusPathExistsApplicationsBlackra1nApp,                  // Various paths exist
    UIDeviceJailbreakStatusPathExistsApplicationsFakeCarrierApp,                // Various paths exist
    UIDeviceJailbreakStatusPathExistsApplicationsIcyApp,                        // Various paths exist
    UIDeviceJailbreakStatusPathExistsApplicationsIntelliScreenApp,              // Various paths exist
    UIDeviceJailbreakStatusPathExistsApplicationsMxTubeApp,                     // Various paths exist
    UIDeviceJailbreakStatusPathExistsApplicationsRockAppApp,                    // Various paths exist
    UIDeviceJailbreakStatusPathExistsApplicationsSBSettingsApp,                 // Various paths exist
    UIDeviceJailbreakStatusPathExistsApplicationsWinterBoardApp,                // Various paths exist
    UIDeviceJailbreakStatusPathExistsPrivateVarLibApt,                          // Various paths exist
    UIDeviceJailbreakStatusPathExistsPrivateVarLibCydia,                        // Various paths exist
    UIDeviceJailbreakStatusPathExistsPrivateVarMobileLibrarySBSettingsThemes,   // Various paths exist
    UIDeviceJailbreakStatusPathExistsPrivateVarTmpCydiaLog,                     // Various paths exist
    UIDeviceJailbreakStatusPathExistsPrivateVarStash,                           // Various paths exist
    UIDeviceJailbreakStatusPathExistsUsrLibexecCydia,                           // Various paths exist
    UIDeviceJailbreakStatusPathExistsUsrBinsshd,                                // Various paths exist
    UIDeviceJailbreakStatusPathExistsUsrSbinsshd,                               // Various paths exist
    UIDeviceJailbreakStatusPathExistsUsrLibexecSftpServer,                      // Various paths exist
    UIDeviceJailbreakStatusPathExistsSystemLibraryLaunchDeamonsIkeyBbotPlist,   // Various paths exist
    UIDeviceJailbreakStatusPathExistsSystemLibraryLaunchDeamonsSaurikCydiaPlist,// Various paths exist
    UIDeviceJailbreakStatusPathExistsLibraryMobileSubstrate,                    // Various paths exist
    UIDeviceJailbreakStatusPathExistsVarCacheApt,                               // Various paths exist
    UIDeviceJailbreakStatusPathExistsVarLibApt,                                 // Various paths exist
    UIDeviceJailbreakStatusPathExistsVarLibCydia,                               // Various paths exist
    UIDeviceJailbreakStatusPathExistsVarLogSyslog,                              // Various paths exist
    UIDeviceJailbreakStatusPathExistsBinBash,                                   // Various paths exist
    UIDeviceJailbreakStatusPathExistsBinSh,                                     // Various paths exist
    UIDeviceJailbreakStatusPathExistsEtcApt,                                    // Various paths exist
    UIDeviceJailbreakStatusPathExistsEtcSshSshdConfig,                          // Various paths exist
    UIDeviceJailbreakStatusPathExistsUsrLibexecSshKeysign,                      // Various paths exist
    UIDeviceJailbreakStatusCydia,                       // Cydia can be opened with URL scheme
    UIDeviceJailbreakStatusSandboxWrite,                // Can fork the process
    UIDeviceJailbreakStatusSymbolicLinkVerification,    // Symbolic links exist to applications
    UIDeviceJailbreakStatusPrivateWrite,                // Writes to a private folder (is it root?)
    UIDeviceJailbreakStatusShellExists,                 // SSH shell exists and is available
} UIDeviceJailbreakStatus;

/*!
 * Category displays detailed information about current device hardware
 */
@interface UIDevice (Software)

/*!
 *  Returns YES if device is jailbroken after series of tests
 *
 *  @return YES if device is jailbroken
 */
- (BOOL)hay_isJailbroken;

/*!
 *  Returns device jailbreak status after series of tests.
 *
 *  @return jailbreak status
 */
- (UIDeviceJailbreakStatus)hay_jailbreakStatus;

/**
 *  Returns device boot date
 *
 *  @return device boot date
 */
- (NSDate *)hay_systemBootDate;

//
// Process related information
//

- (NSArray *)hay_processList;

- (NSUInteger)hay_processCount;

- (float)hay_cpuUsage;

@end
