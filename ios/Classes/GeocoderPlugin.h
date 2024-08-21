#import <Flutter/Flutter.h>

#import <CoreLocation/CoreLocation.h>

@interface ScrumlabGeocoderPlugin : NSObject<FlutterPlugin>
@property (nonatomic, strong) CLGeocoder *geocoder;
@end
