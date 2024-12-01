import cv2 # type: ignore
import matplotlib.pyplot as plt # type: ignore

config_file = '/content/drive/MyDrive/objdetec files/ssd_mobilenet_v3_large_coco_2020_01_14 (2).pbtxt'
frozen_model = '/content/drive/MyDrive/objdetec files/frozen_inference_graph.pb'
model = cv2.dnn_DetectionModel(frozen_model,config_file)