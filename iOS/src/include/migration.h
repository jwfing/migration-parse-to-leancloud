#import <AVOSCloud/AVOSCloud.h>

typedef AVCachePolicy PFCachePolicy;
typedef AVBooleanResultBlock PFBooleanResultBlock;
typedef AVIntegerResultBlock PFIntegerResultBlock;
typedef AVArrayResultBlock PFArrayResultBlock;
typedef AVObjectResultBlock PFObjectResultBlock;
typedef AVSetResultBlock PFSetResultBlock;
typedef AVUserResultBlock PFUserResultBlock;
typedef AVDataResultBlock PFDataResultBlock;
typedef AVImageResultBlock PFImageResultBlock;
typedef AVDataStreamResultBlock PFDataStreamResultBlock;
typedef AVStringResultBlock PFStringResultBlock;
typedef AVIdResultBlock PFIdResultBlock;
typedef AVProgressBlock PFProgressBlock;
typedef AVFileResultBlock PFFileResultBlock;

typedef AVUser PFUser;
typedef AVObject PFObject;
typedef AVGeoPoint PFGeoPoint;
typedef AVQuery PFQuery;
typedef AVFile PFFile;
typedef AVAnonymousUtils PFAnonymousUtils;
typedef AVACL PFACL;
typedef AVRole PFRole;
typedef AVInstallation PFInstallation;
typedef AVPush PFPush;
typedef AVOSCloud Parse;
typedef AVCloud PFCloud;

typedef AVRelation PFRelation;

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
typedef AVAnalytics PFAnalytics;
#endif

#define kPFCachePolicyIgnoreCache kAVCachePolicyIgnoreCache
#define kPFCachePolicyCacheOnly kAVCachePolicyCacheOnly
#define kPFCachePolicyNetworkOnly kAVCachePolicyNetworkOnly
#define kPFCachePolicyCacheElseNetwork kAVCachePolicyCacheElseNetwork
#define kPFCachePolicyNetworkElseCache kAVCachePolicyNetworkElseCache
#define kPFCachePolicyCacheThenNetwork kAVCachePolicyCacheThenNetwork
#define kPFErrorInternalServer kAVErrorInternalServer
#define kPFErrorConnectionFailed kAVErrorConnectionFailed
#define kPFErrorObjectNotFound kAVErrorObjectNotFound
#define kPFErrorInvalidQuery kAVErrorInvalidQuery
#define kPFErrorInvalidClassName kAVErrorInvalidClassName
#define kPFErrorMissingObjectId kAVErrorMissingObjectId
#define kPFErrorInvalidKeyName kAVErrorInvalidKeyName
#define kPFErrorInvalidPointer kAVErrorInvalidPointer
#define kPFErrorInvalidJSON kAVErrorInvalidJSON
#define kPFErrorCommandUnavailable kAVErrorCommandUnavailable
#define kPFErrorIncorrectType kAVErrorIncorrectType
#define kPFErrorInvalidChannelName kAVErrorInvalidChannelName
#define kPFErrorInvalidDeviceToken kAVErrorInvalidDeviceToken
#define kPFErrorPushMisconfigured kAVErrorPushMisconfigured
#define kPFErrorObjectTooLarge kAVErrorObjectTooLarge
#define kPFErrorOperationForbidden kAVErrorOperationForbidden
#define kPFErrorCacheMiss kAVErrorCacheMiss
#define kPFErrorInvalidNestedKey kAVErrorInvalidNestedKey
#define kPFErrorInvalidFileName kAVErrorInvalidFileName
#define kPFErrorInvalidACL kAVErrorInvalidACL
#define kPFErrorTimeout kAVErrorTimeout
#define kPFErrorInvalidEmailAddress kAVErrorInvalidEmailAddress
#define kPFErrorDuplicateValue kAVErrorDuplicateValue
#define kPFErrorInvalidRoleName kAVErrorInvalidRoleName
#define kPFErrorExceededQuota kAVErrorExceededQuota
#define kPFScriptError kAVScriptError
#define kPFValidationError kAVValidationError
#define kPFErrorReceiptMissing kAVErrorReceiptMissing
#define kPFErrorInvalidPurchaseReceipt kAVErrorInvalidPurchaseReceipt
#define kPFErrorPaymentDisabled kAVErrorPaymentDisabled
#define kPFErrorInvalidProductIdentifier kAVErrorInvalidProductIdentifier
#define kPFErrorProductNotFoundInAppStore kAVErrorProductNotFoundInAppStore
#define kPFErrorInvalidServerResponse kAVErrorInvalidServerResponse
#define kPFErrorProductDownloadFileSystemFailure kAVErrorProductDownloadFileSystemFailure
#define kPFErrorInvalidImageData kAVErrorInvalidImageData
#define kPFErrorUnsavedFile kAVErrorUnsavedFile
#define kPFErrorFileDeleteFailure kAVErrorFileDeleteFailure
#define kPFErrorUsernameMissing kAVErrorUsernameMissing
#define kPFErrorUserPasswordMissing kAVErrorUserPasswordMissing
#define kPFErrorUsernameTaken kAVErrorUsernameTaken
#define kPFErrorUserEmailTaken kAVErrorUserEmailTaken
#define kPFErrorUserEmailMissing kAVErrorUserEmailMissing
#define kPFErrorUserWithEmailNotFound kAVErrorUserWithEmailNotFound
#define kPFErrorUserCannotBeAlteredWithoutSession kAVErrorUserCannotBeAlteredWithoutSession
#define kPFErrorUserCanOnlyBeCreatedThroughSignUp kAVErrorUserCanOnlyBeCreatedThroughSignUp
#define kPFErrorFacebookAccountAlreadyLinked kAVErrorFacebookAccountAlreadyLinked
#define kPFErrorAccountAlreadyLinked kAVErrorAccountAlreadyLinked
#define kPFErrorUserIdMismatch kAVErrorUserIdMismatch
#define kPFErrorUsernamePasswordMismatch kAVErrorUsernamePasswordMismatch
#define kPFErrorUserNotFound kAVErrorUserNotFound
#define kPFErrorFacebookIdMissing kAVErrorFacebookIdMissing
#define kPFErrorLinkedIdMissing kAVErrorLinkedIdMissing
#define kPFErrorFacebookInvalidSession kAVErrorFacebookInvalidSession
#define kPFErrorInvalidLinkedSession kAVErrorInvalidLinkedSession
#define kPFErrorInvalidMobilePhoneNumber kAVErrorInvalidMobilePhoneNumber
#define kPFErrorUserMobilePhoneMissing kAVErrorUserMobilePhoneMissing
#define kPFErrorUserWithMobilePhoneNotFound kAVErrorUserWithMobilePhoneNotFound
#define kPFErrorUserMobilePhoneNumberTaken kAVErrorUserMobilePhoneNumberTaken
#define kPFErrorUserMobilePhoneNotVerified kAVErrorUserMobilePhoneNotVerified