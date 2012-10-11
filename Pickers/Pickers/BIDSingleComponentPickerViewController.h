//
//  BIDSingleComponentPickerViewController.h
//  Pickers
//
//  Created by Laïla Atrmouh on 09/10/12.
//  Copyright (c) 2012 URI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDSingleComponentPickerViewController : UIViewController<UIPickerViewDelegate, UIPickerViewDataSource>

@property (strong, nonatomic) IBOutlet UIPickerView *singlePicker;
@property (strong, nonatomic) NSArray *pickerData;
- (IBAction)buttonPressed;



@end
